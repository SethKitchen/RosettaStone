// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef HEARTHSTONEPP_POWER_H
#define HEARTHSTONEPP_POWER_H

#include <hspp/Enchants/Enchant.h>

#include <vector>

namespace Hearthstonepp
{
class ITask;
class Enchant;

//!
//! \brief Power class.
//!
//! This class stores task to perform power and enchant to apply it.
//!
class Power
{
 public:
    //! Returns a list of power tasks.
    //! \return A list of power tasks.
    std::vector<ITask*>& GetPowerTask();

    //! Returns enchant.
    //! \return A pointer to enchant.
    Enchant* GetEnchant() const;

    //! Adds power task to a list of power tasks.
    //! \param task A pointer to power task.
    void AddPowerTask(ITask* task);

    //! Adds enchant.
    //! \param enchant A pointer to enchant.
    void AddEnchant(Enchant* enchant);

 private:
    std::vector<ITask*> m_powerTask;
    Enchant* m_enchant = nullptr;
};
}  // namespace Hearthstonepp

#endif  // HEARTHSTONEPP_POWER_H