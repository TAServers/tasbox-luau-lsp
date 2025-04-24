#pragma once
#include "Luau/Frontend.h"

namespace tasbox
{
Luau::LoadDefinitionFileResult registerDefinitions(Luau::Frontend& frontend, Luau::GlobalTypes& globals);
}
