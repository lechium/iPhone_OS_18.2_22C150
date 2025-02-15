//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol CNKDestinationQueryControllerDelegate;

@interface CNKDestinationQueryControllerInternal : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *scheduleIDSQuerySubject;	// 16 = 0x10
    MISSING_TYPE *scheduleIDSQueryGroupSubject;	// 24 = 0x18
    MISSING_TYPE *scheduleIDSCachedQuerySubject;	// 32 = 0x20
    MISSING_TYPE *scheduleIDSQueryDebouncer;	// 40 = 0x28
    MISSING_TYPE *scheduleIDSQueryGroupDebouncer;	// 48 = 0x30
    MISSING_TYPE *scheduleIDSCachedQueryDebouncer;	// 56 = 0x38
    MISSING_TYPE *scheduleNotificationSubject;	// 64 = 0x40
    MISSING_TYPE *scheduleNotificationDebouncer;	// 72 = 0x48
    MISSING_TYPE *idsDestinations;	// 80 = 0x50
    MISSING_TYPE *idsGroupDestinations;	// 88 = 0x58
    MISSING_TYPE *idsLookupManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000adf44
- (id)init;	// IMP=0x00000000000ad29b
@property(nonatomic) __weak id <CNKDestinationQueryControllerDelegate> delegate; // @synthesize delegate;
- (void)handleIDSStatusChanged;	// IMP=0x00000000000ae067
- (long long)presentationStyleFor:(id)arg1;	// IMP=0x00000000000aeb0d
- (long long)isWebCapableFor:(id)arg1;	// IMP=0x00000000000ae944
- (long long)isVideoAllowedFor:(id)arg1;	// IMP=0x00000000000ae86d
- (long long)isAudioAllowedFor:(id)arg1;	// IMP=0x00000000000ae80f
- (long long)isMultiwayAllowedFor:(id)arg1;	// IMP=0x00000000000ae7fe
- (long long)isFaceTimeAllowedFor:(id)arg1;	// IMP=0x00000000000ae6e6
- (void)queryAddresses:(id)arg1;	// IMP=0x00000000000ae638
- (void)reset;	// IMP=0x00000000000ae5a5
- (void)removeRecipient:(id)arg1;	// IMP=0x00000000000ae4d1
- (void)addRecipient:(id)arg1;	// IMP=0x00000000000ae34b

@end

