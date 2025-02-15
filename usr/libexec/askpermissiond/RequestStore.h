//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface RequestStore : NSObject
{
    NSObject<OS_dispatch_queue> *_fileAccessQueue;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000021e3b
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *fileAccessQueue; // @synthesize fileAccessQueue=_fileAccessQueue;
- (id)_retrieveFile;	// IMP=0x0010000000021955
- (void)_storeFileWithItems:(id)arg1;	// IMP=0x00100000000214af
- (id)_pathWithFileName:(id)arg1;	// IMP=0x0010000000021148
- (id)_filePath;	// IMP=0x00100000000210e9
- (void)_deleteFile;	// IMP=0x0010000000020d61
- (void)storeItems:(id)arg1;	// IMP=0x0010000000020ba9
- (id)items;	// IMP=0x001000000002092d
- (void)clearCache;	// IMP=0x00100000000207a9
- (id)initWithFileName:(id)arg1;	// IMP=0x0010000000020722

@end

