//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDLink : NSObject
{
    int mType;	// 8 = 0x8
    EDCollection *mExternalNames;	// 16 = 0x10
}

+ (id)linkWithType:(int)arg1;	// IMP=0x0060000000137702
- (void).cxx_destruct;	// IMP=0x00000000003a3bf5
- (id)description;	// IMP=0x00000000003a3bb7
- (id)externalNames;	// IMP=0x000000000021696e
- (void)setType:(int)arg1;	// IMP=0x00000000003a3bae
- (int)type;	// IMP=0x000000000014e32b
- (id)initWithType:(int)arg1;	// IMP=0x0000000000137737

@end
