//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARCustomPronData : NSObject
{
    shared_ptr_d15cec97 _data;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000819843
- (void).cxx_destruct;	// IMP=0x0000000000819835
@property(nonatomic) shared_ptr_d15cec97 data; // @synthesize data=_data;
- (id)getRejectedProns;	// IMP=0x00000000008197e9
- (id)getProns;	// IMP=0x00000000008197d0
- (id)validationError;	// IMP=0x0000000000819570
- (_Bool)isValid;	// IMP=0x0000000000819564
- (id)initWithCustomPronData:(shared_ptr_d15cec97)arg1;	// IMP=0x0000000000819512

@end

