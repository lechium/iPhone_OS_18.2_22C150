//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SKUIClientContext, SKUILayoutCache, SKUIResourceLoader, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarContext : NSObject
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    double _maximumNavigationBarWidth;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    UIViewController *_parentViewController;	// 32 = 0x20
    SKUIResourceLoader *_resourceLoader;	// 40 = 0x28
    SKUILayoutCache *_textLayoutCache;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003464ed
@property(retain, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) double maximumNavigationBarWidth; // @synthesize maximumNavigationBarWidth=_maximumNavigationBarWidth;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

@end

