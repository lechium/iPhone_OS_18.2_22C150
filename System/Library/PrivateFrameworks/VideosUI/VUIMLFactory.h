//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMLFactory : NSObject
{
}

+ (void)_registerElements;	// IMP=0x008000000023d5f3
+ (id)sharedInstance;	// IMP=0x008000000023d308
- (id)_URLForResource:(id)arg1 inBundle:(id)arg2;	// IMP=0x000000000023d711
- (id)imageForResource:(id)arg1;	// IMP=0x000000000023d4dc
- (id)URLForResource:(id)arg1;	// IMP=0x000000000023d3ed
- (id)imageProxyForElement:(id)arg1 withLayout:(id)arg2;	// IMP=0x000000000023d3e5
- (Class)collectionViewCellClassForElement:(id)arg1;	// IMP=0x000000000023d3dd
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x000000000023d3c5
- (id)viewForElement:(id)arg1 existingView:(id)arg2;	// IMP=0x000000000023d3ad
- (id)init;	// IMP=0x000000000023d35d

@end

