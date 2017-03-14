//
//  MessagesViewController.h
//  MessagesExtension
//
//  Created by Rainbow on 10/20/16.
//  Copyright © 2016 apple. All rights reserved.
//

#import <Messages/Messages.h>

@interface MessagesViewController : MSMessagesAppViewController <UICollectionViewDelegate, UICollectionViewDataSource>
@property (nonatomic, weak) IBOutlet UICollectionView* collectionView;
@end

