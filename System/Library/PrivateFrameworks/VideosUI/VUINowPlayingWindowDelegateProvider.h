//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VUINowPlayingWindowDelegate;

__attribute__((visibility("hidden")))
@interface VUINowPlayingWindowDelegateProvider : NSObject
{
    id <VUINowPlayingWindowDelegate> _delegate;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00100000002a5d77
- (void).cxx_destruct;	// IMP=0x00000000002a5e40
@property(nonatomic) __weak id <VUINowPlayingWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldNowPlayingWindowDismiss;	// IMP=0x00000000002a5ddd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

