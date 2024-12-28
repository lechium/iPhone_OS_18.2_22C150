//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoBackup/NSObject-Protocol.h>

@class NSUUID;

@protocol NBServerProtocol <NSObject>
- (void)setBackupsEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteBackupID:(NSUUID *)arg1 backupType:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)createManualBackupWithCompletion:(void (^)(NSError *))arg1;
- (void)createLocalBackupForPairingID:(NSUUID *)arg1 completionHandler:(void (^)(NBBackup *, NSError *))arg2;
- (void)restoreFromPairingID:(NSUUID *)arg1 forPairingID:(NSUUID *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)restoreFromBackupID:(NSUUID *)arg1 backupType:(unsigned long long)arg2 forPairingID:(NSUUID *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)listBackupsOfType:(unsigned long long)arg1 timeout:(long long)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end
