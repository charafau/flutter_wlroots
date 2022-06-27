#pragma once

#include <wayland-server-core.h>
#include <wlr/types/wlr_server_decoration.h>
#include <wlr/types/wlr_xdg_decoration_v1.h>

void handle_server_decoration(struct wl_listener *listener, void *data);

void handle_xdg_decoration(struct wl_listener *listener, void *data);