//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRNotificationReceiver, BRQuery;

__attribute__((visibility("hidden")))
@interface BRQueryStitchingContext : NSObject
{
    BRQuery *_query;	// 8 = 0x8
    BRNotificationReceiver *_receiver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007b803
- (void)performAsyncOnReceiver:(CDUnknownBlockType)arg1;	// IMP=0x000000000007b719
- (id)initWithQuery:(id)arg1;	// IMP=0x000000000007b688

@end
