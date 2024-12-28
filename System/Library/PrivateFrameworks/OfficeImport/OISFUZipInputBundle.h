//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface OISFUZipInputBundle : NSObject
{
    OISFUZipArchive *_zipArchive;	// 8 = 0x8
}

- (void)copyEntry:(id)arg1 toFile:(id)arg2;	// IMP=0x0000000000291039
- (unsigned int)crc32ForEntry:(id)arg1;	// IMP=0x000000000029100a
- (long long)lengthOfEntry:(id)arg1;	// IMP=0x0000000000290fdb
- (id)bufferedInputStreamForEntry:(id)arg1;	// IMP=0x0000000000290fac
- (id)inputStreamForEntry:(id)arg1;	// IMP=0x0000000000290f7d
- (_Bool)hasEntryWithName:(id)arg1;	// IMP=0x0000000000290f60
- (void)dealloc;	// IMP=0x0000000000290f25
- (id)initWithZipArchive:(id)arg1;	// IMP=0x0000000000290ed5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
