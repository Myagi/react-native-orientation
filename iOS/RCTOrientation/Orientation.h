//
//  Orientation.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
// #if __has_include(<React/RCTBridgeModule.h>)
// #import <React/RCTBridgeModule.h>
// #else
// #import "RCTBridgeModule.h"
// #endif

#import "../../../react-native/React/Base/RCTBridgeModule.h"

@interface Orientation : NSObject <RCTBridgeModule>
+ (void)setOrientation: (UIInterfaceOrientationMask)orientation;
+ (UIInterfaceOrientationMask)getOrientation;
@end
