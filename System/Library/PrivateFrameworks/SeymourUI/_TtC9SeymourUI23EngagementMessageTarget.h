//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC9SeymourUI23EngagementMessageTarget : NSObject
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *onBannerUpdate;	// 24 = 0x18
    MISSING_TYPE *onBannerRemoval;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000488a00
- (id)init;	// IMP=0x0000000000488980
@property(nonatomic, readonly) _Bool shouldBeNotifiedOfNilPriorityMessageAfterRegistration;
- (void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3;	// IMP=0x0000000000488af0
@property(nonatomic, readonly) NSString *targetIdentifier;

@end
