//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _EARLmModel2
{
    shared_ptr_ae20c496 _model;	// 8 = 0x8
}

+ (id)deserializeModelData:(id)arg1;	// IMP=0x00600000005ef0d4
+ (void)initialize;	// IMP=0x00600000005ee70c
- (id).cxx_construct;	// IMP=0x00000000005ef1c3
- (void).cxx_destruct;	// IMP=0x00000000005ef1b2
@property(readonly, nonatomic) shared_ptr_ae20c496 model; // @synthesize model=_model;
- (id)serializedModelWithLanguage:(id)arg1 modelData:(id)arg2 oovs:(id)arg3;	// IMP=0x00000000005eed15
- (double)age;	// IMP=0x00000000005eed00
- (float)weight;	// IMP=0x00000000005eeceb
- (id)metrics;	// IMP=0x00000000005eeb88
- (void)setProtectionClass:(id)arg1;	// IMP=0x00000000005eea41
- (_Bool)writeToDirectory:(id)arg1;	// IMP=0x00000000005ee894
- (void)setWeight:(float)arg1;	// IMP=0x00000000005ee819
- (id)_initWithModel:(shared_ptr_ae20c496)arg1;	// IMP=0x00000000005ee734

@end

