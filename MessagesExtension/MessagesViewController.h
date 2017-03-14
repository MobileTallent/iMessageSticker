//
//  MessagesViewController.h
//  MessagesExtension
//
//  Created by Rainbow on 10/21/16.
//  Copyright © 2016 admin. All rights reserved.
//
#import <Messages/Messages.h>

@interface MessagesViewController : MSMessagesAppViewController <UICollectionViewDelegate, UICollectionViewDataSource>
@property (nonatomic, weak) IBOutlet UICollectionView* collectionView;
@end
