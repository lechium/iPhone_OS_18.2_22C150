//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol _TtP19CommandAndControlUI23CACLanguageViewDelegate_;

@interface _TtC19CommandAndControlUI21CACLanguageViewBridge : NSObject
{
    MISSING_TYPE *model;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000009e70
- (void)updateDownloadStatusWith:(id)arg1;	// IMP=0x0000000000009d10
- (void)updateInstallationStatusWith:(id)arg1;	// IMP=0x0000000000009bf0
- (void)setSelectedWithLanguageIdentifier:(id)arg1;	// IMP=0x0000000000009980
- (id)makeLanguageUIWithLocales:(id)arg1;	// IMP=0x0000000000009830
- (id)makeLanguageUI;	// IMP=0x0000000000009550
- (id)init;	// IMP=0x00000000000094d0
@property(nonatomic, retain) id <_TtP19CommandAndControlUI23CACLanguageViewDelegate_> delegate; // @synthesize delegate;
- (void)selectedLanguageWithIdentifier:(id)arg1;	// IMP=0x000000000000a230
- (void)cancelDownloadWithIdentifier:(id)arg1;	// IMP=0x0000000000009fa0
- (void)downloadLanguageWithIdentifier:(id)arg1;	// IMP=0x0000000000009ee0

@end

