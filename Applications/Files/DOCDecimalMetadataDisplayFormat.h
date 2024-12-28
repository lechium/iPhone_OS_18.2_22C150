//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DOCDecimalMetadataDisplayFormat : NSObject
{
    _Bool _prefersIntegerFractionalDisplay;	// 8 = 0x8
    long long _maxFractionalDigits;	// 16 = 0x10
    long long _lengthUnits;	// 24 = 0x18
    NSString *_decimalFormatString;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000015dd7
@property(retain) NSString *decimalFormatString; // @synthesize decimalFormatString=_decimalFormatString;
@property long long lengthUnits; // @synthesize lengthUnits=_lengthUnits;
@property long long maxFractionalDigits; // @synthesize maxFractionalDigits=_maxFractionalDigits;
@property _Bool prefersIntegerFractionalDisplay; // @synthesize prefersIntegerFractionalDisplay=_prefersIntegerFractionalDisplay;
- (void)_configureNumberFormatter:(id)arg1;	// IMP=0x0010000000015d14
- (id)_decimalDefaultFormattedDoubleValue:(double)arg1;	// IMP=0x0010000000015c74
- (id)_decimalLengthFormattedDoubleValue:(double)arg1;	// IMP=0x0010000000015bca
- (id)_decimalDisplayStringByFormattingDoubleValue:(double)arg1;	// IMP=0x0010000000015acd
- (id)_integerFractionalDisplayStringByFormattingDoubleValue:(double)arg1;	// IMP=0x0010000000015963
- (id)displayStringForMetadataNumberValue:(id)arg1;	// IMP=0x00100000000158b5
- (id)displayStringForMetadataStringValue:(id)arg1;	// IMP=0x0010000000015619
- (id)displayStringForMetadataValue:(id)arg1;	// IMP=0x0010000000015584
- (id)init;	// IMP=0x001000000001552b

@end
