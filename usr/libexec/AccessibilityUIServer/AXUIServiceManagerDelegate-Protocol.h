//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, UIWindowScene;

@protocol AXUIServiceManagerDelegate <NSObject>
- (_Bool)destroyScene:(UIWindowScene *)arg1;
- (void)requestSceneForSceneClientIdentifier:(NSString *)arg1 scenePreferredLevel:(double)arg2 spatialConfiguration:(id)arg3;
@end

