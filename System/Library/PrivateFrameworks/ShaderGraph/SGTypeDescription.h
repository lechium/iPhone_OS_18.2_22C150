//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface SGTypeDescription : NSObject
{
    MISSING_TYPE *type;	// 8 = 0x8
    MISSING_TYPE *properties;	// 16 = 0x10
    MISSING_TYPE *offset;	// 24 = 0x18
}

+ (id)typeDescriptionRepresenting:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0060000000097ec0
- (void).cxx_destruct;	// IMP=0x00000000000981d0
- (id)init;	// IMP=0x0000000000098190
@property(nonatomic, readonly) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000097e90
- (_Bool)getMTLDataType:(unsigned long long *)arg1;	// IMP=0x0000000000097b60
- (_Bool)getMTLTextureType:(unsigned long long *)arg1;	// IMP=0x0000000000097af0
@property(nonatomic) unsigned int offset; // @synthesize offset;
@property(nonatomic, readonly) unsigned int alignment;
@property(nonatomic, readonly) unsigned int size;
@property(nonatomic, readonly) NSArray *properties;

@end
