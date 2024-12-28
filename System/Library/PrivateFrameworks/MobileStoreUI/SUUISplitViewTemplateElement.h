//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class SUUIJSDOMFeatureNavigationDocument;

__attribute__((visibility("hidden")))
@interface SUUISplitViewTemplateElement : SUUIViewElement
{
    SUUIJSDOMFeatureNavigationDocument *_leftNavigationDocument;	// 8 = 0x8
    long long _preferredDisplayMode;	// 16 = 0x10
    SUUIJSDOMFeatureNavigationDocument *_rightNavigationDocument;	// 24 = 0x18
}

+ (id)supportedFeatures;	// IMP=0x00600000002ab0e6
- (void).cxx_destruct;	// IMP=0x00000000002ab3ed
@property(readonly, nonatomic) long long preferredDisplayMode; // @synthesize preferredDisplayMode=_preferredDisplayMode;
- (id)_splitElementForIndex:(long long)arg1;	// IMP=0x00000000002ab1e0
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000002ab158
@property(readonly, nonatomic) _Bool usesInlineSplitContent;
@property(readonly, nonatomic) SUUIViewElement *rightSplitElement;
@property(readonly) SUUIJSDOMFeatureNavigationDocument *rightNavigationDocument;
@property(readonly, nonatomic) SUUIViewElement *leftSplitElement;
@property(readonly) SUUIJSDOMFeatureNavigationDocument *leftNavigationDocument;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000002aae30

@end
