//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APStorageManager, NSDate, NSString;

@interface APFileSystemItemInfo : NSObject
{
    NSDate *_createdDate;	// 8 = 0x8
    NSDate *_modifiedDate;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_filePath;	// 32 = 0x20
    APStorageManager *_fileManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000013ebe0
@property(readonly, nonatomic) APStorageManager *fileManager; // @synthesize fileManager=_fileManager;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000013e903

@end

