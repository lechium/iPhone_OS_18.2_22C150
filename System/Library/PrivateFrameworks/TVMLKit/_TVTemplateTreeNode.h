//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _TVTemplateTreeNode : NSObject
{
    NSMutableArray *_derivedTemplateNodes;	// 8 = 0x8
    _Bool _isAbstract;	// 16 = 0x10
    NSString *_templateName;	// 24 = 0x18
    NSArray *_styleSheetURLs;	// 32 = 0x20
    NSArray *_finalURLs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006dbee
@property(copy, nonatomic) NSArray *finalURLs; // @synthesize finalURLs=_finalURLs;
@property(readonly, nonatomic) _Bool isAbstract; // @synthesize isAbstract=_isAbstract;
@property(readonly, copy, nonatomic) NSArray *styleSheetURLs; // @synthesize styleSheetURLs=_styleSheetURLs;
@property(readonly, copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (void)addDerivedTemplateNode:(id)arg1;	// IMP=0x000000000006db4e
@property(readonly, copy, nonatomic) NSArray *derivedTemplateNodes;
- (id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2 abstract:(_Bool)arg3;	// IMP=0x000000000006da6e
- (id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2;	// IMP=0x000000000006da59

@end
