//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OBAdditionalDisplayLanguageManager : NSObject
{
    NSString *_originalDisplayLanguage;	// 8 = 0x8
    NSString *_additionalDisplayLanguage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000011201
@property(retain, nonatomic) NSString *additionalDisplayLanguage; // @synthesize additionalDisplayLanguage=_additionalDisplayLanguage;
@property(retain, nonatomic) NSString *originalDisplayLanguage; // @synthesize originalDisplayLanguage=_originalDisplayLanguage;
- (id)didTapRightBarButtonItemForWelcomeController:(id)arg1 currentDisplayLanguage:(id)arg2;	// IMP=0x00000000000110c9
- (void)configureNavigationItemRightBarButtonItemForWelcomeController:(id)arg1 currentDisplayLanguage:(id)arg2 action:(SEL)arg3;	// IMP=0x0000000000010ef6
- (id)initWithDisplayLanguage:(id)arg1;	// IMP=0x0000000000010e07

@end
