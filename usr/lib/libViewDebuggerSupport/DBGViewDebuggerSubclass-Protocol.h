//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ViewDebuggerSupport/NSObject-Protocol.h>

@class CALayer, NSArray, NSData, NSString;

@protocol DBGViewDebuggerSubclass <NSObject>
+ (id)primaryWindowFromWindows:(NSArray *)arg1;
+ (NSString *)displayNameForView:(id)arg1;
+ (CALayer *)layerForView:(id)arg1;
+ (NSString *)snapshotMethodForView:(id)arg1;
+ (NSData *)snapshotView:(id)arg1 errorString:(id *)arg2;
+ (_Bool)isViewSubclass:(id)arg1;
+ (_Bool)isWindowSubclass:(id)arg1;
+ (double)screenBackingScaleForView:(id)arg1;
+ (double)screenBackingScaleForWindow:(id)arg1;
+ (NSArray *)additionalRootLevelViewsToArchive;
+ (id)windowContentViewForWindow:(id)arg1;
+ (NSArray *)appWindows;
@end
