//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject
{
    NSMutableArray *_archivers;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x001000000003210a
- (void).cxx_destruct;	// IMP=0x00000000000323a0
- (void)fileCopierDidFinish:(id)arg1;	// IMP=0x00000000000322e2
- (void)fileCopierDidStart:(id)arg1;	// IMP=0x00000000000322dc
- (void)compressPath:(id)arg1 toPath:(id)arg2;	// IMP=0x00000000000321b5
- (id)init;	// IMP=0x000000000003215f

@end
