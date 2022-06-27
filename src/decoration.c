#include "decoration.h"

void handle_server_decoration(struct wl_listener *listener, void *data) {
	struct wlr_server_decoration *wlr_deco = data;
	// struct sway_server_decoration *deco = calloc(1, sizeof(*deco));
	// if (deco == NULL) {
	// 	return;
	// }
	// deco->wlr_server_decoration = wlr_deco;
	// wl_signal_add(&wlr_deco->events.destroy, &deco->destroy);
	// deco->destroy.notify = server_decoration_handle_destroy;
	// wl_signal_add(&wlr_deco->events.mode, &deco->mode);
	// deco->mode.notify = server_decoration_handle_mode;
	// wl_list_insert(&server.decorations, &deco->link);
}


void handle_xdg_decoration(struct wl_listener *listener, void *data) {
	struct wlr_xdg_toplevel_decoration_v1 *wlr_deco = data;
	// struct sway_xdg_shell_view *xdg_shell_view = wlr_deco->surface->data;
	// struct sway_xdg_decoration *deco = calloc(1, sizeof(*deco));
	// if (deco == NULL) {
	// 	return;
	// }
	// deco->view = &xdg_shell_view->view;
	// deco->view->xdg_decoration = deco;
	// deco->wlr_xdg_decoration = wlr_deco;
	// wl_signal_add(&wlr_deco->events.destroy, &deco->destroy);
	// deco->destroy.notify = xdg_decoration_handle_destroy;
	// wl_signal_add(&wlr_deco->events.request_mode, &deco->request_mode);
	// deco->request_mode.notify = xdg_decoration_handle_request_mode;
	// wl_list_insert(&server.xdg_decorations, &deco->link);
	// xdg_decoration_handle_request_mode(&deco->request_mode, wlr_deco);
}