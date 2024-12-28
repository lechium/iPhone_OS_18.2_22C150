//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUNavigationController.h>

@class NSMutableArray, ServiceBridgedNavigationItem;
@protocol ServiceBridgedNavigationControllerProxy;

@interface ServiceBridgedNavigationController : SUNavigationController
{
    id <ServiceBridgedNavigationControllerProxy> _proxyHandler;	// 8 = 0x8
    ServiceBridgedNavigationItem *_bridgedNavigationItem;	// 16 = 0x10
    NSMutableArray *_containerViewControllers;	// 24 = 0x18
}

+ (id)sharedController;	// IMP=0x00400000000274a5
- (void).cxx_destruct;	// IMP=0x0020000000027afa
@property(retain, nonatomic) NSMutableArray *containerViewControllers; // @synthesize containerViewControllers=_containerViewControllers;
@property(readonly, nonatomic) ServiceBridgedNavigationItem *bridgedNavigationItem; // @synthesize bridgedNavigationItem=_bridgedNavigationItem;
@property(nonatomic) __weak id <ServiceBridgedNavigationControllerProxy> proxyHandler; // @synthesize proxyHandler=_proxyHandler;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000027942
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000027878
- (id)topViewController;	// IMP=0x0010000000027828
- (id);	// IMP=0x0010000000027816
- (void)removeAllContainerViewControllers;	// IMP=0x00100000000277d9
- (void)synchonrizeContinainerViewControllers;	// IMP=0x00100000000275f3
- (void)setupWithContainerViewController:(id)arg1;	// IMP=0x001000000002757d
- (id)init;	// IMP=0x00100000000274fa

@end
