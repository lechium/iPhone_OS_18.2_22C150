//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _EARSpeechRecognitionToken : NSObject
{
    struct Token _quasarToken;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000000d2f19
- (void).cxx_destruct;	// IMP=0x00000000000d2f0b
@property(readonly, nonatomic) struct Token quasarToken; // @synthesize quasarToken=_quasarToken;
- (id)description;	// IMP=0x00000000000d2c8f
@property(readonly, nonatomic) double acousticCost;
@property(readonly, nonatomic) double graphCost;
@property(readonly, nonatomic) _Bool isModifiedByAutoPunctuation;
@property(readonly, nonatomic) _Bool prependedAutoPunctuation;
@property(readonly, nonatomic) _Bool appendedAutoPunctuation;
@property(readonly, nonatomic) NSString *ipaPhoneSequence;
@property(readonly, nonatomic) NSString *phoneSequence;
@property(readonly, nonatomic) _Bool hasSpaceBefore;
@property(readonly, nonatomic) _Bool hasSpaceAfter;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) double silenceStart;
@property(readonly, nonatomic) double end;
@property(readonly, nonatomic) double start;
@property(readonly, copy, nonatomic) NSString *tokenName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d2b46
- (id)_initWithQuasarToken:(const void *)arg1;	// IMP=0x00000000000d2ad5
- (id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(_Bool)arg6 hasSpaceBefore:(_Bool)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9 appendedAutoPunctuation:(_Bool)arg10;	// IMP=0x00000000000d273f
- (id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(_Bool)arg6 hasSpaceBefore:(_Bool)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9;	// IMP=0x00000000000d2723
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d26b2
- (unsigned long long)hash;	// IMP=0x00000000000d265a

@end

