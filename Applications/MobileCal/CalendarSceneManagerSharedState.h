//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ApplicationLastActiveTimeProvider;

@interface CalendarSceneManagerSharedState : NSObject
{
    _Bool _extendedLaunchComplete;	// 8 = 0x8
    NSObject<ApplicationLastActiveTimeProvider> *_applicationLastActiveTimeProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000013ec9d
@property(nonatomic) __weak NSObject<ApplicationLastActiveTimeProvider> *applicationLastActiveTimeProvider; // @synthesize applicationLastActiveTimeProvider=_applicationLastActiveTimeProvider;
@property(nonatomic) _Bool extendedLaunchComplete; // @synthesize extendedLaunchComplete=_extendedLaunchComplete;

@end
