//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SUUITabularLockupLayout : NSObject
{
    NSArray *_columns;	// 8 = 0x8
}

+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00600000000398e3
- (void).cxx_destruct;	// IMP=0x0000000000039bf3
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;	// IMP=0x00000000000399dc
- (id)initWithLockup:(id)arg1 context:(id)arg2;	// IMP=0x00000000000396a8

@end
