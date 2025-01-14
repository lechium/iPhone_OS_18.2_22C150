//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDCharacterRun, WDRubyProperties;

__attribute__((visibility("hidden")))
@interface WDRubyRun
{
    WDCharacterRun *mPhoneticRun;	// 32 = 0x20
    WDRubyProperties *mRubyProperties;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004157c1
- (id)description;	// IMP=0x0000000000415783
- (id)rubyBase;	// IMP=0x0000000000415771
- (void)appendPhoneticRunString:(id)arg1;	// IMP=0x0000000000415754
- (void)setPhoneticRunString:(id)arg1;	// IMP=0x0000000000415737
- (id)phoneticRunString;	// IMP=0x000000000041571a
- (id)phoneticRun;	// IMP=0x0000000000415705
- (id)rubyProperties;	// IMP=0x00000000004156f0
- (int)runType;	// IMP=0x00000000004156e5
- (id)initWithParagraph:(id)arg1;	// IMP=0x0000000000415607

@end

