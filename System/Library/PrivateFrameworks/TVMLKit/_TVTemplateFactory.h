//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface _TVTemplateFactory : NSObject
{
    NSBundle *_tvmlKitBundle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003869e
- (void)_registerCustomAnimators;	// IMP=0x0000000000038698
- (void)_registerTemplateControllers;	// IMP=0x0000000000037eac
- (void)_registerStyleSheet:(id)arg1 forTemplate:(id)arg2 parentStyleSheets:(id)arg3;	// IMP=0x0000000000037bb2
- (void)registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(_Bool)arg3;	// IMP=0x0000000000037908
- (id)init;	// IMP=0x00000000000378a7

@end
