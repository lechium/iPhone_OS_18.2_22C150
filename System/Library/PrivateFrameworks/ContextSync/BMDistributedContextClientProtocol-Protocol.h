//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContextSync/NSObject-Protocol.h>

@class BMDSL, NSArray, NSString;

@protocol BMDistributedContextClientProtocol <NSObject>
- (_Bool)unregisterForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forUseCase:(NSString *)arg3 forDevices:(NSArray *)arg4 withError:(id *)arg5;
- (_Bool)unregisterForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forUseCase:(NSString *)arg3 forDeviceTypes:(long long)arg4 withError:(id *)arg5;
- (_Bool)unregisterForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forDeviceTypes:(long long)arg3;
- (_Bool)unregisterForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forDeviceTypes:(long long)arg3 withError:(id *)arg4;
- (_Bool)registerForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forUseCase:(NSString *)arg3 withOptions:(unsigned long long)arg4 forDevices:(NSArray *)arg5 withError:(id *)arg6;
- (_Bool)registerForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forUseCase:(NSString *)arg3 withOptions:(unsigned long long)arg4 forDeviceTypes:(long long)arg5 withError:(id *)arg6;
- (_Bool)registerForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forUseCase:(NSString *)arg3 shouldWake:(_Bool)arg4 forDevices:(NSArray *)arg5 withError:(id *)arg6;
- (_Bool)registerForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 forUseCase:(NSString *)arg3 shouldWake:(_Bool)arg4 forDeviceTypes:(long long)arg5 withError:(id *)arg6;
- (_Bool)registerForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 shouldWake:(_Bool)arg3 forDeviceTypes:(long long)arg4;
- (_Bool)registerForUpdates:(BMDSL *)arg1 withIdentifier:(NSString *)arg2 shouldWake:(_Bool)arg3 forDeviceTypes:(long long)arg4 withError:(id *)arg5;
@end

