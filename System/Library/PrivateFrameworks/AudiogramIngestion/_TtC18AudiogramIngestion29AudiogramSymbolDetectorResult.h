//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC18AudiogramIngestion29AudiogramSymbolDetectorResult : NSObject
{
    MISSING_TYPE *box;	// 8 = 0x8
    MISSING_TYPE *labelName;	// 40 = 0x28
    MISSING_TYPE *confidence;	// 56 = 0x38
}

+ (struct CGRect)boundingBoxForSymbols:(id)arg1;	// IMP=0x00600000000462a0
- (void).cxx_destruct;	// IMP=0x0000000000046500
- (id)init;	// IMP=0x0000000000046350
- (struct CGRect)scaledBoxWithSize:(struct CGSize)arg1 offset:(struct CGPoint)arg2;	// IMP=0x0000000000045f60
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) double confidence; // @synthesize confidence;
@property(nonatomic, readonly) NSString *labelName;
@property(nonatomic, readonly) struct CGRect box; // @synthesize box;

@end
