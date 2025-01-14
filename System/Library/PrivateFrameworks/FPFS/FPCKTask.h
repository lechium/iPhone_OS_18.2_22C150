//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface FPCKTask : NSObject
{
    NSObject<OS_dispatch_queue> *workQueue;	// 8 = 0x8
}

+ (id)buildPauseResult:(_Bool)arg1 semaphore:(id)arg2;	// IMP=0x0060000000006c68
+ (void)runFPCKForDomain:(id)arg1 domainUserInfo:(id)arg2 domainRootURL:(id)arg3 databaseBackupPath:(id)arg4 urls:(id)arg5 volumeRole:(unsigned int)arg6 options:(unsigned long long)arg7 reason:(unsigned long long)arg8 fpfs:(_Bool)arg9 iCDPackageDetection:(_Bool)arg10 shouldPause:(CDUnknownBlockType)arg11 sendDiagnostics:(CDUnknownBlockType)arg12 saveCheckpoint:(CDUnknownBlockType)arg13 isInvalidated:(CDUnknownBlockType)arg14 completionHandler:(CDUnknownBlockType)arg15;	// IMP=0x0060000000005571
+ (id)xpcServiceProxyWithConnection:(id)arg1;	// IMP=0x00600000000054a3
+ (id)xpcServiceConnection;	// IMP=0x0060000000005424
+ (id)sharedManager;	// IMP=0x006000000000534d
- (void).cxx_destruct;	// IMP=0x0000000000006cc2
- (void)dumpDatabaseAt:(id)arg1 fullDump:(_Bool)arg2 writeTo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006b20
- (void)scheduleFPCKRun:(id)arg1 domainUserInfo:(id)arg2 domainRootURL:(id)arg3 databaseBackupPath:(id)arg4 urls:(id)arg5 volumeRole:(unsigned int)arg6 options:(unsigned long long)arg7 reason:(unsigned long long)arg8 fpfs:(_Bool)arg9 iCDPackageDetection:(_Bool)arg10 launchType:(unsigned long long)arg11 updateReceiver:(id)arg12 shouldPause:(CDUnknownBlockType)arg13 proxy:(id)arg14 completionHandler:(CDUnknownBlockType)arg15;	// IMP=0x0000000000006854
- (void)prepareFPCKRun:(id)arg1 domainUserInfo:(id)arg2 domainRootURL:(id)arg3 databaseBackupPath:(id)arg4 urls:(id)arg5 volumeRole:(unsigned int)arg6 personaIdentifier:(id)arg7 options:(unsigned long long)arg8 reason:(unsigned long long)arg9 fpfs:(_Bool)arg10 iCDPackageDetection:(_Bool)arg11 launchType:(unsigned long long)arg12 runOnWorkQueue:(_Bool)arg13 completionHandler:(CDUnknownBlockType)arg14;	// IMP=0x00000000000064df
- (unsigned long long)_resolveLaunchType:(unsigned long long)arg1;	// IMP=0x00000000000064c8
- (void)_launchXPCServiceWithUpdateReceiver:(id)arg1 proxy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000064b0
- (void)_prepareXPCService:(id)arg1 domainUserInfo:(id)arg2 domainRootURL:(id)arg3 databaseBackupPath:(id)arg4 urls:(id)arg5 volumeRole:(unsigned int)arg6 personaIdentifier:(id)arg7 options:(unsigned long long)arg8 reason:(unsigned long long)arg9 fpfs:(_Bool)arg10 iCDPackageDetection:(_Bool)arg11 completionHandler:(CDUnknownBlockType)arg12;	// IMP=0x000000000000599e
- (id)init;	// IMP=0x00000000000053a2

@end

