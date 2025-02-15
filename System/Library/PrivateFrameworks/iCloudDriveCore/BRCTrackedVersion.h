//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRFileObjectID, NSString;

__attribute__((visibility("hidden")))
@interface BRCTrackedVersion : NSObject
{
    BRFileObjectID *_fileObjectID;	// 8 = 0x8
    NSString *_etagIfLoser;	// 16 = 0x10
    int _kind;	// 24 = 0x18
}

+ (id)trackedVersionFor:(id)arg1 withEtagIfLoser:(id)arg2 kind:(int)arg3;	// IMP=0x001000000000c3f4
- (void).cxx_destruct;	// IMP=0x000000000000c5e6
@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSString *etagIfLoser; // @synthesize etagIfLoser=_etagIfLoser;
@property(readonly, nonatomic) BRFileObjectID *fileObjectID; // @synthesize fileObjectID=_fileObjectID;
- (unsigned long long)hash;	// IMP=0x000000000000c543
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c485
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c47a

@end

