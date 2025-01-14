//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSURLTaskInfo, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSFinanceActionResponse : NSObject
{
    _Bool _shouldRetry;	// 8 = 0x8
    _Bool _tidContinue;	// 9 = 0x9
    ACAccount *_account;	// 16 = 0x10
    NSString *_creditString;	// 24 = 0x18
    long long _kind;	// 32 = 0x20
    AMSURLTaskInfo *_taskInfo;	// 40 = 0x28
    NSURL *_URL;	// 48 = 0x30
}

+ (id)_URLForCommerceUIFromURL:(id)arg1 taskInfo:(id)arg2 tidContinue:(_Bool)arg3;	// IMP=0x00100000003c4e1f
+ (_Bool)_isModernURL:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000003c4b7d
+ (id)_deepLinkForURL:(id)arg1 taskInfo:(id)arg2 gotoType:(long long)arg3 isAccountURL:(_Bool)arg4 tidContinue:(_Bool)arg5;	// IMP=0x00100000003c4a90
+ (_Bool)_stashTIDContinueHeadersForTaskInfo:(id)arg1;	// IMP=0x00100000003c49de
+ (id)_presentEngagementForURL:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000003c3f03
+ (id)_bodyObjectFromRequest:(id)arg1;	// IMP=0x00100000003c340e
+ (id)handleGotoURL:(id)arg1 taskInfo:(id)arg2 gotoType:(long long)arg3 accountURL:(_Bool)arg4 tidContinue:(_Bool)arg5 retryOnSuccess:(_Bool)arg6;	// IMP=0x00100000003c2cac
+ (void)handleExternalGotoURL:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000003c2a3f
+ (void)handleExternalGotoURL:(id)arg1;	// IMP=0x00100000003c2a2b
+ (id)actionWithUpdatedCreditString:(id)arg1 account:(id)arg2 taskInfo:(id)arg3;	// IMP=0x00100000003c2966
+ (id)actionWithActionDictionary:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000003c24c7
- (void).cxx_destruct;	// IMP=0x00000000003c51d9
@property(nonatomic) _Bool tidContinue; // @synthesize tidContinue=_tidContinue;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
@property(retain, nonatomic) NSString *creditString; // @synthesize creditString=_creditString;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_handleGotoAction;	// IMP=0x00000000003c3c5a
- (id)_performOpenStandardURL;	// IMP=0x00000000003c3bb4
- (id)_performGotoURL;	// IMP=0x00000000003c39ad
- (id)_performCreditDisplayUpdate;	// IMP=0x00000000003c36aa
- (id)performWithTaskInfo:(id)arg1;	// IMP=0x00000000003c33a7
- (id)initWithTaskInfo:(id)arg1;	// IMP=0x00000000003c2435

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

