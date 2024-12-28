//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, NSArray, NSCloudKitMirroringImportRequest, NSMutableArray, PFCloudKitImporterOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporter : NSObject
{
    PFCloudKitImporterOptions *_options;	// 8 = 0x8
    NSCloudKitMirroringImportRequest *_request;	// 16 = 0x10
    NSArray *_workItems;	// 24 = 0x18
    NSMutableArray *_workItemResults;	// 32 = 0x20
    CKServerChangeToken *_updatedDatabaseChangeToken;	// 40 = 0x28
    unsigned long long _totalImportedBytes;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x000000000019749f
- (id)initWithOptions:(id)arg1 request:(id)arg2;	// IMP=0x000000000019741c

@end
