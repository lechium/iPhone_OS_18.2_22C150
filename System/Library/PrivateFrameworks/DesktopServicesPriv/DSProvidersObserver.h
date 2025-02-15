//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface DSProvidersObserver : NSObject
{
    struct TNodePtr fParentNode;	// 8 = 0x8
    NSObject *_token;	// 16 = 0x10
    NSArray *_providers;	// 24 = 0x18
    _Bool _populated;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000000ab3eb
- (void).cxx_destruct;	// IMP=0x00000000000ab3bc
@property(readonly) _Bool populated; // @synthesize populated=_populated;
- (id)providersByAddingProviderIfNeeded:(id)arg1;	// IMP=0x00000000000ab26b
- (void)setProviders:(id)arg1;	// IMP=0x00000000000ab131
- (id)providers;	// IMP=0x00000000000ab0cc
- (void)stopObserving;	// IMP=0x00000000000ab092
- (void)receivedChanges:(id)arg1;	// IMP=0x00000000000aa8d4
- (void)startObserving;	// IMP=0x00000000000aa621

@end

