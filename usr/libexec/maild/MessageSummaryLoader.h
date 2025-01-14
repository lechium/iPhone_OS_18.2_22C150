//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFPromise, MFMailMessage, NSString;

@interface MessageSummaryLoader : NSObject
{
    MFMailMessage *_message;	// 8 = 0x8
    NSString *_summary;	// 16 = 0x10
    unsigned long long _numberOfLoadAttempts;	// 24 = 0x18
    EFPromise *_summaryPromise;	// 32 = 0x20
    double _order;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000058b19
@property(nonatomic) double order; // @synthesize order=_order;
@property(retain, nonatomic) EFPromise *summaryPromise; // @synthesize summaryPromise=_summaryPromise;
@property(nonatomic) unsigned long long numberOfLoadAttempts; // @synthesize numberOfLoadAttempts=_numberOfLoadAttempts;
@property(readonly, nonatomic) NSString *summary; // @synthesize summary=_summary;
- (id)_bodyLoader;	// IMP=0x0010000000058a21
- (_Bool)wantsContentsOfType:(long long)arg1;	// IMP=0x0010000000058a15
- (long long)priority;	// IMP=0x00100000000589bb
- (double)ordering;	// IMP=0x00100000000589a9
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x0010000000058618
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;	// IMP=0x0010000000058453
- (id)message;	// IMP=0x0010000000058445
- (id)requestSummaryImmediatelyFromDownloadedMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;	// IMP=0x0010000000058424
- (void)cancelSummaryRequest;	// IMP=0x0010000000058308
- (id)requestSummary;	// IMP=0x001000000005815b
@property(readonly, nonatomic) _Bool summaryLoaded;
- (void)cancel;	// IMP=0x0010000000058059
- (id)initWithMessage:(id)arg1;	// IMP=0x0010000000057f73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

