//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TCCDAccessIdentity, TCCDAttributionChain, TCCDServer, TCCDService;
@protocol OS_dispatch_semaphore, OS_tcc_identity;

@interface TCCDRequestContext : NSObject
{
    _Bool _initialPrompt;	// 8 = 0x8
    _Bool _reminderPrompt;	// 9 = 0x9
    _Bool _accessSetPrompt;	// 10 = 0xa
    _Bool _watchInitiatedPrompt;	// 11 = 0xb
    unsigned int _userTccdUnavailable;	// 12 = 0xc
    unsigned int _promptingSemaphoreHeld;	// 16 = 0x10
    unsigned long long _spiVersion;	// 24 = 0x18
    NSString *_functionName;	// 32 = 0x20
    NSString *_messageIdentifier;	// 40 = 0x28
    TCCDService *_service;	// 48 = 0x30
    unsigned long long _desiredAuth;	// 56 = 0x38
    TCCDAttributionChain *_attributionChain;	// 64 = 0x40
    TCCDAccessIdentity *_subjectIdentity;	// 72 = 0x48
    TCCDServer *_server;	// 80 = 0x50
    NSDictionary *_clientDict;	// 88 = 0x58
    NSObject<OS_tcc_identity> *_explicitlyAssumedIdentity;	// 96 = 0x60
    unsigned long long _promptingPolicy;	// 104 = 0x68
    unsigned long long _usageStringPolicy;	// 112 = 0x70
    unsigned long long _recordUpgradePolicy;	// 120 = 0x78
    unsigned long long _promptRightsMask;	// 128 = 0x80
    NSObject<OS_dispatch_semaphore> *_promptingSemaphore;	// 136 = 0x88
    unsigned long long _queryCount;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x001000000005e338
@property(nonatomic) unsigned long long queryCount; // @synthesize queryCount=_queryCount;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *promptingSemaphore; // @synthesize promptingSemaphore=_promptingSemaphore;
@property(nonatomic) unsigned int promptingSemaphoreHeld; // @synthesize promptingSemaphoreHeld=_promptingSemaphoreHeld;
@property(nonatomic) unsigned int userTccdUnavailable; // @synthesize userTccdUnavailable=_userTccdUnavailable;
@property(nonatomic) unsigned long long promptRightsMask; // @synthesize promptRightsMask=_promptRightsMask;
@property(nonatomic) unsigned long long recordUpgradePolicy; // @synthesize recordUpgradePolicy=_recordUpgradePolicy;
@property(nonatomic) unsigned long long usageStringPolicy; // @synthesize usageStringPolicy=_usageStringPolicy;
@property(nonatomic) unsigned long long promptingPolicy; // @synthesize promptingPolicy=_promptingPolicy;
@property(retain, nonatomic) NSObject<OS_tcc_identity> *explicitlyAssumedIdentity; // @synthesize explicitlyAssumedIdentity=_explicitlyAssumedIdentity;
@property(retain, nonatomic) NSDictionary *clientDict; // @synthesize clientDict=_clientDict;
@property(nonatomic) _Bool watchInitiatedPrompt; // @synthesize watchInitiatedPrompt=_watchInitiatedPrompt;
@property(nonatomic) _Bool accessSetPrompt; // @synthesize accessSetPrompt=_accessSetPrompt;
@property(retain, nonatomic) TCCDServer *server; // @synthesize server=_server;
@property(nonatomic) _Bool reminderPrompt; // @synthesize reminderPrompt=_reminderPrompt;
@property(nonatomic) _Bool initialPrompt; // @synthesize initialPrompt=_initialPrompt;
@property(retain, nonatomic) TCCDAccessIdentity *subjectIdentity; // @synthesize subjectIdentity=_subjectIdentity;
@property(retain, nonatomic) TCCDAttributionChain *attributionChain; // @synthesize attributionChain=_attributionChain;
@property(nonatomic) unsigned long long desiredAuth; // @synthesize desiredAuth=_desiredAuth;
@property(retain, nonatomic) TCCDService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(nonatomic) unsigned long long spiVersion; // @synthesize spiVersion=_spiVersion;
@property(readonly) NSDictionary *daemonDict;
@property(readonly, nonatomic) _Bool isPreflight;
@property(readonly, nonatomic) NSString *identityDescription;
- (id)initForSyncRequestForSubjectBundleIdentifier:(id)arg1 service:(id)arg2;	// IMP=0x001000000005dc95
- (id)init;	// IMP=0x001000000005dc7c
- (void)dealloc;	// IMP=0x001000000005dbad
- (id)initWithRequestMessage:(id)arg1 forServer:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005d4aa
- (void)presentAsynchronousDenialNotificationForService:(id)arg1;	// IMP=0x00100000000483d4
- (void)presentAsynchronousDenialNotificationWithMessage:(id)arg1 buttonTitle:(id)arg2;	// IMP=0x0010000000047c85
- (void)presentSynchronousPromptWithHeader:(id)arg1 message:(id)arg2 aButtonTitle:(id)arg3 aButtonAuth:(unsigned long long)arg4 bButtonTitle:(id)arg5 bButtonAuth:(unsigned long long)arg6 currentAuth:(unsigned long long)arg7 updatingResult:(id)arg8;	// IMP=0x001000000004a7fe
- (void)presentSynchronousPromptWithHeader:(id)arg1 message:(id)arg2 aButtonTitle:(id)arg3 aButtonAuth:(unsigned long long)arg4 bButtonTitle:(id)arg5 bButtonAuth:(unsigned long long)arg6 cButtonTitle:(id)arg7 cButtonAuth:(unsigned long long)arg8 currentAuth:(unsigned long long)arg9 updatingResult:(id)arg10;	// IMP=0x001000000004a7b8
- (void)presentSynchronousPromptWithHeader:(id)arg1 message:(id)arg2 aButtonTitle:(id)arg3 aButtonAuth:(unsigned long long)arg4 bButtonTitle:(id)arg5 bButtonAuth:(unsigned long long)arg6 cButtonTitle:(id)arg7 cButtonAuth:(unsigned long long)arg8 currentAuth:(unsigned long long)arg9 withTimeoutInSeconds:(unsigned int)arg10 updatingResult:(id)arg11;	// IMP=0x0010000000048593

@end

