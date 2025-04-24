#include "LSP/TASBoxDefinitions.hpp"

#include <LSP/LuauExt.hpp>

namespace tasbox
{
Luau::LoadDefinitionFileResult registerDefinitions(Luau::Frontend& frontend, Luau::GlobalTypes& globals)
{
    // TODO: Make this actually fetch the definitions and register them
    return types::registerDefinitions(frontend, globals, R"(
    declare Luau: {
        run: (sandbox: any, path: string, code: string) -> (),
        createSandbox: () -> any
    }
    )");
}
}
