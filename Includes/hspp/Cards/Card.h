// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef HEARTHSTONEPP_CARD_H
#define HEARTHSTONEPP_CARD_H

#include <hspp/Enchants/Power.h>
#include <hspp/Enums/CardEnums.h>

#include <map>
#ifndef HEARTHSTONEPP_MACOSX
#include <optional>
#else
#include <experimental/optional>
#endif
#include <string>
#include <vector>

namespace Hearthstonepp
{
class Power;

//!
//! \brief Card class.
//!
//! This class stores card information such as attack, health and cost.
//!
class Card
{
 public:
    //! Default constructor.
    Card() = default;

    //! Default destructor.
    virtual ~Card() = default;

    //! Default copy constructor.
    Card(const Card& card) = default;

    //! Default move constructor.
    Card(Card&& card) = default;

    //! Default copy assignment operator.
    Card& operator=(const Card& card) = default;

    //! Default move assignment operator.
    Card& operator=(Card&& card) = default;

    //! Initializes card data.
    void Initialize();

    //! Finds out if this card has \p mechanic.
    //! \param mechanic The mechanic of card.
    //! \return true if this card has \p mechanic, and false otherwise.
    bool HasMechanic(GameTag mechanic) const;

    //! Returns the number of cards that can be inserted into the deck.
    //! \return The number of cards that can be inserted into the deck.
    unsigned int GetMaxAllowedInDeck() const;

    //! Prints brief card information.
    virtual void ShowBriefInfo() const;

    //! Prints card information.
    virtual void ShowInfo() const;

    Rarity rarity = Rarity::INVALID;
    Faction faction = Faction::INVALID;
    CardSet cardSet = CardSet::INVALID;
    CardClass cardClass = CardClass::INVALID;
    CardType cardType = CardType::INVALID;
    Race race = Race::INVALID;

    std::string id;
    std::string name;
    std::string text;

#ifndef HEARTHSTONEPP_MACOSX
    std::optional<size_t> attack;
    std::optional<size_t> health;
    std::optional<size_t> spellDamage;
    std::optional<size_t> durability;
#else
    std::experimental::optional<size_t> attack;
    std::experimental::optional<size_t> health;
    std::experimental::optional<size_t> spellDamage;
    std::experimental::optional<size_t> durability;
#endif
    size_t cost = 0;

    std::vector<GameTag> mechanics;
    std::map<PlayReq, int> playRequirements;
    std::vector<std::string> entourages;

    Power* power = nullptr;

    unsigned int maxAllowedInDeck = 0;
    bool isCollectible = false;
};
}  // namespace Hearthstonepp

#endif  // HEARTHSTONEPP_CARD_H
