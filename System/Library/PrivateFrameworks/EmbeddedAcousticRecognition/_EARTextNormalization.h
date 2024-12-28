//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _EARTokenizer;

@interface _EARTextNormalization : NSObject
{
    _EARTokenizer *_tokenizer;	// 8 = 0x8
    struct unique_ptr<quasar::Munger, std::default_delete<quasar::Munger>> _munger;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000372867
- (void).cxx_destruct;	// IMP=0x000000000037283f
- (id)munge:(id)arg1;	// IMP=0x0000000000372403
- (id)tokenize:(id)arg1;	// IMP=0x00000000003723dd
- (id)normalize:(id)arg1;	// IMP=0x00000000003722d2
- (id)initWithMungeRules:(id)arg1;	// IMP=0x0000000000372112
- (id)initWithModelRoot:(id)arg1;	// IMP=0x0000000000372061
- (id)initWithModelRoot:(id)arg1 mungeRules:(id)arg2;	// IMP=0x0000000000371e41
- (id)initWithModelRoot:(id)arg1 mungeRuleFile:(id)arg2;	// IMP=0x0000000000371cd7
- (id)initWithNcsRoot:(id)arg1;	// IMP=0x0000000000371c62
- (id)initWithNcsRoot:(id)arg1 mungeRules:(id)arg2;	// IMP=0x0000000000371b93
- (id)initWithNcsRoot:(id)arg1 mungeRuleFile:(id)arg2;	// IMP=0x0000000000371ac4
- (id)init;	// IMP=0x0000000000371ab6

@end
