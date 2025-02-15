//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebBookmarks/NSObject-Protocol.h>

@class CKRecord, CKRecordID, NSArray, NSData, NSString;

@protocol WBSSettingsSyncEngineAccess <NSObject>
@property(readonly, nonatomic) _Bool backgroundImageAppearanceIsLight;
@property(readonly, nonatomic) _Bool backgroundImageExists;
@property(readonly, nonatomic) NSArray *syncSettingsUpDictionary;
- (void)didDeleteRemoteRecordWithID:(CKRecordID *)arg1;
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(CKRecord *)arg1;

@optional
- (void)clearAllPageZoomSyncData;
- (void)setPageZoomSyncData:(NSData *)arg1 forRecordName:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (NSData *)pageZoomSyncDataForRecordName:(NSString *)arg1;
- (NSArray *)macZoomPreferences;
- (void)deleteBackgroundImageDirectory;
@end

