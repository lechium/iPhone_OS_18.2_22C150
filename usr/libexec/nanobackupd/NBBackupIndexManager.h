//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NBBackupiCloud, NSArray, NSMutableDictionary;

@interface NBBackupIndexManager : NSObject
{
    NSArray *_allBackups;	// 8 = 0x8
    NSMutableDictionary *_metadataIndex;	// 16 = 0x10
    NBBackupiCloud *_iCloudBackup;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000006cbb
@property(retain, nonatomic) NBBackupiCloud *iCloudBackup; // @synthesize iCloudBackup=_iCloudBackup;
@property(retain, nonatomic) NSMutableDictionary *metadataIndex; // @synthesize metadataIndex=_metadataIndex;
@property(readonly, nonatomic) NSArray *allBackups; // @synthesize allBackups=_allBackups;
- (id)newBackupUUID;	// IMP=0x0010000000006b58
- (id)pathToBackupIndex;	// IMP=0x0010000000006ace
- (id)persistMetadataIndex;	// IMP=0x0010000000006857
- (id)_metadataIndexReadFromDiskIfNeeded;	// IMP=0x0010000000006703
- (id)metadataIndexReadFromDiskIfNeeded;	// IMP=0x00100000000066aa
- (void)removeICloudBackupsFromIndex;	// IMP=0x00100000000064e6
- (_Bool)shouldLoadiCloudBackups;	// IMP=0x001000000000633a
- (void)loadiCloudBackups:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005d66
- (void)purgeCache;	// IMP=0x0010000000005d29
- (void)pruneLocalBackups;	// IMP=0x001000000000583d
- (void)deleteBackupWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000535d
- (void)createNewBackup:(CDUnknownBlockType)arg1;	// IMP=0x00100000000050e8
- (id)pathToBackupID:(id)arg1;	// IMP=0x0010000000005055
- (id)pathToBackup:(id)arg1;	// IMP=0x0010000000004ff3
- (void)backupForID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004e66
- (void)localBackupsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004c76
- (void)iCloudBackupsWithTimeout:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000049f6
- (void)allBackupsWithTimeout:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004727
- (id)initWithiCloudBackup:(id)arg1;	// IMP=0x00100000000046bc

@end

