//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface _PUWallpaperDebugTransition : NSObject
{
    id <NSObject> _animationSettings;	// 8 = 0x8
    double _px_duration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000065746e
@property(nonatomic) double px_duration; // @synthesize px_duration=_px_duration;
@property(retain, nonatomic) id <NSObject> animationSettings; // @synthesize animationSettings=_animationSettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
