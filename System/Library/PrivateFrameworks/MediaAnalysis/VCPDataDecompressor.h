//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface VCPDataDecompressor : NSObject
{
    NSMutableData *_scratchData;	// 8 = 0x8
    NSMutableData *_resultData;	// 16 = 0x10
}

+ (id)decompressor;	// IMP=0x00600000000907e0
- (void).cxx_destruct;	// IMP=0x00000000000908fc
- (id)decompressData:(id)arg1;	// IMP=0x00000000000907fa
- (id)init;	// IMP=0x0000000000090732

@end

