//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>

@class RBJetsamProperties, RBSProcessIdentity;
@protocol RBBundleProperties;

@protocol RBJetsamPropertyManaging <NSObject>
- (RBJetsamProperties *)jetsamPropertiesForProcess:(int)arg1 identity:(RBSProcessIdentity *)arg2 bundleProperties:(id <RBBundleProperties>)arg3 isPlatformBinary:(_Bool)arg4;
@end
