//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ISIconObserverDelegate;

__attribute__((visibility("hidden")))
@interface ISIconObserver : NSObject
{
    id _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005240f
@property(readonly) __weak id <ISIconObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2;	// IMP=0x000000000005239d
- (void)dealloc;	// IMP=0x0000000000052328
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000052280

@end
