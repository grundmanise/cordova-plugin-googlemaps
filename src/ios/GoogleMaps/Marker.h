//
//  Marker.h
//  SimpleMap
//
//  Created by masashi on 11/8/13.
//
//

#import "GoogleMaps.h"
#import "MyPlgunProtocol.h"
#import "PluginUtil.h"
#import "NSData+Base64.h"
#import "GMUMarkerClustering.h"

@interface Marker : CDVPlugin<MyPlgunProtocol, GMUClusterItem>
@property (nonatomic, strong) GoogleMapsViewController* mapCtrl;
- (void)createMarker:(CDVInvokedUrlCommand*)command;
- (void)hideMarker:(CDVInvokedUrlCommand*)command;
- (void)showMarker:(CDVInvokedUrlCommand*)command;
- (void)hideMarkerForCode:(NSString*)hashCode;
- (void)showMarkerForCode:(NSString*)hashCode;
- (void)showInfoWindow:(CDVInvokedUrlCommand*)command;
- (void)hideInfoWindow:(CDVInvokedUrlCommand*)command;
- (void)isInfoWindowShown:(CDVInvokedUrlCommand*)command;
- (void)getPosition:(CDVInvokedUrlCommand*)command;
- (void)setSnippet:(CDVInvokedUrlCommand*)command;
- (void)setTitle:(CDVInvokedUrlCommand*)command;
- (void)setFlat:(CDVInvokedUrlCommand*)command;
- (void)setOpacity:(CDVInvokedUrlCommand*)command;
- (void)setDraggable:(CDVInvokedUrlCommand*)command;
- (void)setDisableAutoPan:(CDVInvokedUrlCommand*)command;
- (void)setVisible:(CDVInvokedUrlCommand*)command;
- (void)setIcon:(CDVInvokedUrlCommand*)command;
- (void)setIconAnchor:(CDVInvokedUrlCommand*)command;
- (void)setInfoWindowAnchor:(CDVInvokedUrlCommand*)command;
- (void)remove:(CDVInvokedUrlCommand*)command;
- (void)setPosition:(CDVInvokedUrlCommand*)command;
- (void)setRotation:(CDVInvokedUrlCommand*)command;
- (void)setAnimation:(CDVInvokedUrlCommand*)command;
- (void)downloadImageWithURL:(NSURL *)url completionBlock:(void (^)(BOOL succeeded, UIImage *image))completionBlock;

// Internal use
-(void)setMarkerAnimation_:(NSString *)animation marker:(GMSMarker *)marker pluginResult:(CDVPluginResult *)pluginResult callbackId:(NSString*)callbackId;
-(void)setDropAnimation_:(GMSMarker *)marker pluginResult:(CDVPluginResult *)pluginResult callbackId:(NSString*)callbackId;
-(void)setBounceAnimation_:(GMSMarker *)marker pluginResult:(CDVPluginResult *)pluginResult callbackId:(NSString*)callbackId;

-(void)setIcon_:(GMSMarker *)marker iconProperty:(NSDictionary *)iconProperty
   pluginResult:(CDVPluginResult *)pluginResult
     callbackId:(NSString*)callbackId;

@property(nonatomic, readonly, getter=clustering_getPosition) CLLocationCoordinate2D position;
@property(nonatomic, readonly) NSString *name;

- (Marker*)initWithPosition:(CLLocationCoordinate2D)position name:(NSString *)name;
@end
