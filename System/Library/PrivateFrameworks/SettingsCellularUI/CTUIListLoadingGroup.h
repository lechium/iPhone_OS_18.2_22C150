//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface CTUIListLoadingGroup : NSObject
{
    NSArray *_specifiers;	// 8 = 0x8
    PSListController *_hostController;	// 16 = 0x10
    PSSpecifier *_groupSpecifier;	// 24 = 0x18
    PSSpecifier *_spinnerSpecifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000028b90
@property(retain, nonatomic) PSSpecifier *spinnerSpecifier; // @synthesize spinnerSpecifier=_spinnerSpecifier;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
@property(retain, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (id)initWithHostController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x000000000002888e

@end

